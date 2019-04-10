import java.util.Comparator;

public class Table implements Comparable<Table>, Iterable {

	private int _numbers[];

	public final static Comparator<Table> MAX_COMPARATOR = new MaxComparator();

	public final static Comparator<Table> LENGTH_COMPARATOR = new LengthComparator();

	private static class MaxComparator implements Comparator<Table> {
		@Override
		public int compare(Table t1, Table t2) {
			return t1.getMax() - t2.getMax();
		}
	}

	private static class LengthComparator implements Comparator<Table> {
		@Override
		public int compare(Table t1, Table t2) {
			return t1.length() - t2.length();
		}
	}

	private class TableIterator implements Iterator {
		private int _index = 0;
		
		@Override
		public boolean hasNext() { return _index + 1 < _numbers.length; }

		@Override
		public int next() { return _numbers[++_index]; }
	}

	public Table(int size) {
		_numbers = new int[size];
	}

	public int getValue(int position) {
		return _numbers[position];
	}
	
	public void setValue(int position, int value) {
		_numbers[position] = value;
	}

	public void setAll(int value) {
		for(int i = 0; i < _numbers.length; ++i)
			_numbers[i] = value;
	}

	public int getSum() {
		int sum = 0;
		for (int i : _numbers)
			sum += i;
		return sum;
	}

	public int getMax() {
		int max = _numbers[0];
		for (int i : _numbers)
			if (max < i)
				max = i;
		return max;
	}

	public int length() { return _numbers.length; }

	public Iterator getIterator() { return new TableIterator(); }

//	public boolean contains(SelectionPredicate predicate) {
//		for(int i = 0; i < _numbers.length; ++i)
//			if(predicate.ok(_numbers[i]))
//				return true;
//		return false;
//	}

	@Override
	public int compareTo(Table other) {
		return getSum() - other.getSum();
	}
}

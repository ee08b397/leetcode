class StrStr {
	public static void main(String[] args) {
		StrStr s = new StrStr();
		String source = "abcdef";
		String target = "bc";
		System.out.println(s.strstr(source, target));
	}

	public int strstr(String source, String target) {
		if (source == null || target == null)
			return -1;
		int i, j;
		for (i = 0; i < (source.length() - target.length() + 1); i++) {
			for (j = 0; j < target.length(); j++) {
				if (source.charAt(i + j) != target.charAt(j)) {
					break;
				}
				System.out.println(i + " " + j);
			}
			if (j == target.length()) {
				return i;
			}
		}
		return -1;
	}
}

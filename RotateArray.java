class RotateArray {
	public void rotate_k(int[] nums, int k) {
		for(int i = 0; i < k; i++) {
			rotate_1(nums);
		}
		for(int num : nums)
			System.out.print(num + " ");
		System.out.println();
	}

	public void rotate_1(int[] nums) {
		int head = nums[0];
		for(int i = 0; i < nums.length - 1; i++) {
			nums[i] = nums[i+1];
		}
		nums[nums.length - 1] = head;
	}

	public static void main(String[] args) {
		RotateArray s = new RotateArray();
		int[] nums = {0,1,2,3,4,5};
		s.rotate_k(nums, 2);
		s.rotate_k(nums, 4);
	}
}

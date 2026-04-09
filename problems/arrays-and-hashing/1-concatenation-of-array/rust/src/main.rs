fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
    let mut ans: Vec<i32> = vec![];
    let nums_size = nums.len();
    for i in 0..nums_size*2 {
        ans.push(nums[i % nums_size]);
    }
    ans
}

fn main() {
    let nums_1: Vec<i32> = vec![1, 4, 1, 2];
    let nums_2: Vec<i32> = vec![22, 21, 20, 1];
    let sol_nums_1: Vec<i32> = vec![1, 4, 1, 2, 1, 4, 1, 2];
    let sol_nums_2: Vec<i32> = vec![22, 21, 20, 1, 22, 21, 20, 1];

    let res_1 = get_concatenation(nums_1);
    let res_2 = get_concatenation(nums_2);

    if res_1 != sol_nums_1 || res_2 != sol_nums_2 {
        println!("Actual results not equal with expected results.");
    }
    else {
        println!("Results correct.");
    }
}

use std::{collections::HashMap, vec};

fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut complements: HashMap<i32, i32> = HashMap::new();
    for i in 0..nums.len() {
        let num = nums[i];
        let complement = target - num;
        if complements.contains_key(&num) {
            return vec![complements[&num], i as i32];
        }
        complements.insert(complement, i as i32);
    }
    vec![-1, -1]
}

fn main() {
    let nums_1 = vec![3, 4, 5, 6];
    let target_1 = 7;
    let nums_2 = vec![4, 5, 6];
    let target_2 = 10;

    let res_1 = two_sum(nums_1, target_1);
    let res_2 = two_sum(nums_2, target_2);

    println!("{:?}", res_1);
    println!("{:?}", res_2);

    if res_1 != vec![0, 1] && res_2 != vec![0, 2] {
        println!("Actual results not equal with expected results.");
    }
    else {
        println!("Results correct.");
    }
}

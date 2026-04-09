use std::collections::HashSet;

pub fn has_duplicate(nums: Vec<i32>) -> bool {
    let mut unique_set = HashSet::new();
    for num in nums {
        if !unique_set.contains(&num) {
            unique_set.insert(num);
        }
        else {
            return true;
        }
    }

    return false;
}

fn main() {
    let nums_1 = vec![1,2,3,3];
    let nums_2 = vec![1,2,3,4];

    let res_1 = has_duplicate(nums_1);
    let res_2 = has_duplicate(nums_2);

    if res_1 != true && res_2 != false {
        println!("Actual results not equal with expected results.");
    }
    else {
        println!("Results correct.");
    }
}

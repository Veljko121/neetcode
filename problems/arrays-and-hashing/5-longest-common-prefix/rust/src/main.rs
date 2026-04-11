fn longest_common_prefix(strs: Vec<String>) -> String {
    let mut prefix = String::new();

    for (i, c) in strs[0].chars().enumerate() {
        for str in &strs {
            if str.chars().nth(i) != Some(c) {
                return prefix
            }
        }
        prefix.push(c);
    }

    prefix
}

fn main() {
    let strs_1 = vec![String::from("bat"), String::from("bag"), String::from("bank"), String::from("band")];
    let prefix_1 = String::from("ba");
    let strs_2 = vec![String::from("dance"), String::from("dag"), String::from("danger"), String::from("damage")];
    let prefix_2 = String::from("da");
    let strs_3 = vec![String::from("neet"), String::from("feet")];
    let prefix_3 = String::from("");

    let res_1 = longest_common_prefix(strs_1);
    let res_2 = longest_common_prefix(strs_2);
    let res_3 = longest_common_prefix(strs_3);

    if res_1 != prefix_1 || res_2 != prefix_2 || res_3 != prefix_3 {
        println!("Actual results not equal with expected results.");
    }
    else {
        println!("Results correct.");
    }
}

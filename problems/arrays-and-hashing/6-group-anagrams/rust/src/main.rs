use std::collections::HashMap;

fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
    let mut res: HashMap<Vec<i32>, Vec<String>> = HashMap::new();

    for s in strs {
        let mut count: Vec<i32> = vec![0; 26];

        for c in s.chars() {
            count[c as usize - 'a' as usize] += 1;
        }

        res.entry(count).or_insert(Vec::new()).push(s);
    }

    res.into_values().collect()
}

fn main() {
    let strs_1 = vec![String::from("act"), String::from("pots"), String::from("tops"), String::from("cat"), String::from("stop"), String::from("hat")];
    let strs_2 = vec![String::from("x")];
    let strs_3 = vec![String::from("")];

    let mut output_1 = vec![vec![String::from("hat")], vec![String::from("act"), String::from("cat")], vec![String::from("stop"), String::from("pots"), String::from("tops")]];
    let mut output_2 = vec![vec![String::from("x")]];
    let mut output_3 = vec![vec![String::from("")]];
    output_1.iter_mut().for_each(|g| g.sort());
    output_2.iter_mut().for_each(|g| g.sort());
    output_3.iter_mut().for_each(|g| g.sort());
    output_1.sort();
    output_2.sort();
    output_3.sort();

    let mut res_1 = group_anagrams(strs_1);
    let mut res_2 = group_anagrams(strs_2);
    let mut res_3 = group_anagrams(strs_3);
    res_1.iter_mut().for_each(|g| g.sort());
    res_2.iter_mut().for_each(|g| g.sort());
    res_3.iter_mut().for_each(|g| g.sort());
    res_1.sort();
    res_2.sort();
    res_3.sort();

    if output_1 != res_1 || output_2 != res_2 || output_3 != res_3 {
        println!("Actual results not equal with expected results.");
    }
    else {
        println!("Results correct.");
    }
}

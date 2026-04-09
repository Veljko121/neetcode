use std::collections::HashMap;

fn is_anagram(s: String, t: String) -> bool {
    let s_chars: Vec<char> = s.chars().collect();
    let t_chars: Vec<char> = t.chars().collect();
    let s_size = s.len();
    let t_size = t.len();
    if s_size != t_size {
        return false
    }
    let mut s_hashmap = HashMap::new();
    let mut t_hashmap = HashMap::new();
    for i in 0..s_size {
        *s_hashmap.entry(s_chars[i]).or_insert(0) += 1;
        *t_hashmap.entry(t_chars[i]).or_insert(0) += 1;
    }

    return s_hashmap == t_hashmap
}

fn main() {
    let s_1   = String::from("racecar");
    let t_1 = String::from("carrace");
    let s_2   = String::from("jar");
    let t_2 = String::from("jam");

    let res_1 = is_anagram(s_1, t_1);
    let res_2 = is_anagram(s_2, t_2);

    if res_1 != true && res_2 != false {
        println!("Actual results not equal with expected results.");
    }
    else {
        println!("Results correct.");
    }
}

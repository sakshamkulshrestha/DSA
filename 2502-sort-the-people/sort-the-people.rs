impl Solution {
    pub fn sort_people(names: Vec<String>, heights: Vec<i32>) -> Vec<String> {
        use std::collections::HashMap;

        let mut map: HashMap<i32, String> = HashMap::new();
        for i in 0..names.len() {
            map.insert(heights[i], names[i].clone());
        }

        let mut v = heights.clone();
        v.sort_by(|a, b| b.cmp(a));

        v.into_iter().map(|h| map[&h].clone()).collect()
    }
}
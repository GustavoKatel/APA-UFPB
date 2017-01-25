
pub fn sort(vec: &mut Vec<usize>) {

    let vlen = vec.len();

    for i in 0..vlen {

        let min = (i..vlen).min_by_key(|x| vec[*x]).unwrap();
        vec.swap(min, i);

    }

}

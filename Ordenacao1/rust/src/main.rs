use std::{io, env};

mod selection_sort;

fn main() {
    if let Some(arg1) = env::args().nth(1) {

        let mut vec : Vec<usize> = Vec::new();

        let mut input_text = String::new();
        'read_loop: loop {
            match io::stdin()
            .read_line(&mut input_text) {
                Ok(n) => {
                    if n == 0 {
                        break 'read_loop;
                    }
                },
                Err(..) => break 'read_loop,
            }

            let mut numbers: Vec<usize> = input_text
                .split_whitespace()
                .map(|s| s.parse().unwrap())
                .collect();
            vec.append(&mut numbers);
        }

        match arg1.as_ref() {
            "1" => {
                selection_sort::sort(&mut vec);
            },
            "2" => {
                selection_sort::sort(&mut vec);
            },
            _ => {
                println!("Invalid algorithm", );
            }
        }

        for num in vec {
            println!("{:?}", num);
        }

    } else {

        println!("Usage: ./ord <ALGO> < input.file > output.file", );

    }
}

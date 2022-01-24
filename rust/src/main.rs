#[no_mangle]
static GLOBAL_VAR: usize=6;

mod shared;

fn main() {
    let factor:isize = 2;
    unsafe {
      println!("{} {} {}", GLOBAL_VAR, shared::EXTERN_GLOBAL_VAR, factor);
    }

    println!("Before modification:- secret value: {}", shared::get());
    shared::multiply(factor);
    println!("After modification:- secret value: {}", shared::get());
}

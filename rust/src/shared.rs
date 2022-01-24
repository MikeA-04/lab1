#[no_mangle]
pub static mut EXTERN_GLOBAL_VAR:isize = 5;

#[no_mangle]
pub fn multiply(mfactor: isize) {
 unsafe {
  EXTERN_GLOBAL_VAR = EXTERN_GLOBAL_VAR * mfactor;
 }
}

#[no_mangle]
pub fn get() -> isize {
  unsafe {
    EXTERN_GLOBAL_VAR
  }
}

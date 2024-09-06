P8 _p8 = P8::from_sraw(RS1);
WRITE_RD(_p8.to_posit<P16_1>().v);
P16_1 _p16 = P16_1::from_sraw(RS1);
WRITE_RD(_p16.to_posit<P8>().v);
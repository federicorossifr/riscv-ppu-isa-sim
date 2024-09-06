P16_0 _p16 = P16_0::from_sraw(RS1);
WRITE_RD(_p16.to_posit<P16_1>().v);
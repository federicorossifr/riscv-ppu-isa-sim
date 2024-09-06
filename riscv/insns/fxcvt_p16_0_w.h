P16_0fx _rs1 = P16_0fx::from_sraw(RS1);
WRITE_RD(P16_0fx::unpacked_low2full(_rs1.unpack_low()).v);
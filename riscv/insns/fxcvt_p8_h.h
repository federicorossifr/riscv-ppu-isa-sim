P8fx _rs1 = P8fx::from_sraw(RS1);
WRITE_RD(P8fx::unpacked_low2full(_rs1.unpack_low()).v);
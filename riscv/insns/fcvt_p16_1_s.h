require_extension('F');
require_rv64;
require_fp;
softfloat_roundingMode = 7;
pfl tmp =  {float(P16_1::from_sraw(RS1))};
float32_t tmpf = tmp.sfl;
WRITE_FRD( tmpf );
set_fp_exceptions;
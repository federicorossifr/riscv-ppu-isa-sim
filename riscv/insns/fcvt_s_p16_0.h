require_extension('F');
require_rv64;
require_fp;
softfloat_roundingMode = 7;
pfl tmpf;
tmpf.sfl = f32(FRS1);
WRITE_RD( P16_0(tmpf.fl).v );
set_fp_exceptions;
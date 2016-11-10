wire [(9*9)-1:0] k[`NUM_KERNELS] 
genvar k_count;
generate
for (k_count=0; k_count<`NUM_KERNELS; k_count=k_count+1) begin :kloopassign
assign k[k_count] = {001000000,001000000,001000000,001000000,001000000,001000000,001000000,001000000,001000000};
end // for
endgenerate

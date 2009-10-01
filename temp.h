#if 0
    vs_1_1
    dcl_position v0
    dcl_color v1
    mul r0, v0, v0
    mov r1.x, r0.x
    add r1.x, r1.x, r0.y
    add r1.x, r1.x, r0.z
    rsq r1.x, r1.x
    mul r1.x, r1.x, c4.x
    mul r1.x, r1.x, c5.x
    mov r1.w, r1.x
    sge r1.w, r1.w, r1.w
    mul r1.xyz, v0.xyzz, r1.x
    sge r0.x, r0.x, r0.x
    add r0.x, r0.x, -c4.x
    rcp r2.x, v0.w
    mul r2.x, r2.x, r0.x
    mul r0.xyz, v0.xyzz, r2.x
    sge r0.w, r0.w, r0.w
    mov r0, v0
    m4x4 oPos, r1, c0
    mov oD0, v1

// approximately 22 instruction slots used
#endif

const DWORD g_vs11_main[] =
{
    0xfffe0101, 0x0000001f, 0x80000000, 0x900f0000, 0x0000001f, 0x8000000a, 
    0x900f0001, 0x00000005, 0x800f0000, 0x90e40000, 0x90e40000, 0x00000001, 
    0x80010001, 0x80000000, 0x00000002, 0x80010001, 0x80000001, 0x80550000, 
    0x00000002, 0x80010001, 0x80000001, 0x80aa0000, 0x00000007, 0x80010001, 
    0x80000001, 0x00000005, 0x80010001, 0x80000001, 0xa0000004, 0x00000005, 
    0x80010001, 0x80000001, 0xa0000005, 0x00000001, 0x80080001, 0x80000001, 
    0x0000000d, 0x80080001, 0x80ff0001, 0x80ff0001, 0x00000005, 0x80070001, 
    0x90a40000, 0x80000001, 0x0000000d, 0x80010000, 0x80000000, 0x80000000, 
    0x00000002, 0x80010000, 0x80000000, 0xa1000004, 0x00000006, 0x80010002, 
    0x90ff0000, 0x00000005, 0x80010002, 0x80000002, 0x80000000, 0x00000005, 
    0x80070000, 0x90a40000, 0x80000002, 0x0000000d, 0x80080000, 0x80ff0000, 
    0x80ff0000, 0x00000001, 0x800f0000, 0x90e40000, 0x00000014, 0xc00f0000, 
    0x80e40001, 0xa0e40000, 0x00000001, 0xd00f0000, 0x90e40001, 0x0000ffff
};

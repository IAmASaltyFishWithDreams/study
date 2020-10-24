#include <stdio.h>
#include <stdlib.h>
#include <cxxabi.h>

int main() {
    /* const char *mangled_name = "_ZNK3MapI10StringName3RefI8GDScriptE10ComparatorIS0_E16DefaultAllocatorE3hasERKS0_"; */
    /* const char * mangled_name = "_ZN7Yunmiao19initServerResourcesERN6Mordor9IOManagerE"; */
    /* const char * mangled_name = "_Z3runiPPc"; */
    /* const char * mangled_name = "_ZN6Mordor6Daemon3runEiPPcN5boost8functionIFiiS2_EEEb"; */
    /* const char * mangled_name = "_ZN6Mordor5FiberD1Ev"; */
    const char * mangled_name = "_ZN5boost6detail8function26void_function_ref_invoker1IN7Yunmiao12HTTPServeMuxEvNS_10shared_ptrIN6Mordor4HTTP13ServerRequestEEEE6invokeERNS1_15function_bufferES9_";
    int status = -1;
    char *demangled_name = abi::__cxa_demangle(mangled_name, NULL, NULL, &status);
    printf("Demangled: %s\n", demangled_name);
    free(demangled_name);
    return 0;
}

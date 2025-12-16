///   Is the operation (like division by zero) illegal? 
///   
//    Y/return NaN/whatever has the highest priority
//    N/ return (select) from mux whatever was encoded by an instruction.
//    
// That or just return the result and build a separate block for exceptions.
// Priority gate of sorts? 

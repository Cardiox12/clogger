#include <iostream>
#include "includes/clogger.hpp"

int     main(){
    clogger::clogger logger("test.log");

    logger.warn("OS has insufficient memory space");
    logger.debug("Debug message test");
    logger.info("User pressed cancel button");
    logger.error("Error, cannot connect to imager");
    logger.fatal("Imager crashed");
    return (0);
}
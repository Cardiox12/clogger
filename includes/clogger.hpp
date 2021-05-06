//
// Created by kyoto on 06/05/2021.
//

#ifndef CLOGGER_CLOGGER_HPP
#define CLOGGER_CLOGGER_HPP

#include <iostream>
#include <fstream>

namespace clogger {
    enum log_level {
        DEBUG,
        INFO,
        WARN,
        ERROR,
        FATAL
    };

    static const char *str_level[] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR",
            "FATAL"
    };

    class clogger {
        static const char   m_sep = '|';
        std::ofstream       m_stream;

        void write(const char *message, const char *level);
        char *getTimestamp(const char *fmt);
    public:
        clogger(const char *filename);
        ~clogger();

        void debug(const char *message);
        void info(const char *message);
        void warn(const char *message);
        void error(const char *message);
        void fatal(const char *message);
    };
}


#endif //CLOGGER_CLOGGER_HPP

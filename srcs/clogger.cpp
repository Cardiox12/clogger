//
// Created by kyoto on 06/05/2021.
//

#include "../includes/clogger.hpp"

clogger::clogger::clogger(const char *filename)
    : m_filename( filename ), m_stream( filename, std::ios::app ) {}

void clogger::clogger::debug(const char *message) {
    write(message, str_level[ log_level::DEBUG ]);
}

void clogger::clogger::info(const char *message) {
    write(message, str_level[ log_level::INFO ]);
}

void clogger::clogger::warn(const char *message) {
    write(message, str_level[ log_level::WARN ]);
}

void clogger::clogger::error(const char *message) {
    write(message, str_level[ log_level::ERROR ]);
}

void clogger::clogger::fatal(const char *message) {
    write(message, str_level[ log_level::FATAL ]);
}

void clogger::clogger::write(const char *message, const char *level) {
    char    timestamp[100];
    time_t  now = time(nullptr);
    tm      *tm_local = localtime(&now);

    strftime(timestamp, 100, "%Y-%m-%dT%H:%M:%S", tm_local);
    m_stream << "[" << timestamp << "] ";
    m_stream << "[" << level << "] ";
    m_stream << message << std::endl;
}

clogger::clogger::~clogger() = default;


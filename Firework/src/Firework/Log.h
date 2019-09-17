#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Firework {

	class FIREWORK_API Log {

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;


	};

}

// Core Log Macros
#define FWK_CORE_TRACE(...)     ::Firework::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define FWK_CORE_INFO(...)      ::Firework::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FWK_CORE_WARN(...)      ::Firework::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FWK_CORE_ERROR(...)     ::Firework::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FWK_CORE_FATAL(...)     ::Firework::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log Macros
#define FWK_CLIENT_TRACE(...)   ::Firework::Log::GetClientLogger()->trace(__VA_ARGS__)
#define FWK_CLIENT_INFO(...)    ::Firework::Log::GetClientLogger()->info(__VA_ARGS__)
#define FWK_CLIENT_WARN(...)    ::Firework::Log::GetClientLogger()->warn(__VA_ARGS__)
#define FWK_CLIENT_ERROR(...)   ::Firework::Log::GetClientLogger()->error(__VA_ARGS__)
#define FWK_CLIENT_FATAL(...)   ::Firework::Log::GetClientLogger()->fatal(__VA_ARGS__)
/*
 * Auto-generated from memory.memory_config — do not edit manually.
 */

#pragma once

#include <cstdint>

/**
 * Configuration for memory components.
 * 
 *     This class defines the configuration parameters for memory components in the system,
 *     like size and atomic operation support.
 * 
 *     Attributes
 *     ----------
 *     size: int
 *         The size of the memory in bytes.
 *     atomics: bool
 *         True if the memory should support riscv atomics. Since this is slowing down the model, it
 *         should be set to True only if needed.
 *     latency: int
 *         Specify extra latency which will be added to any incoming request.
 */
struct MemoryConfig
{
    int64_t size;
    bool atomics;
    int64_t latency;
};

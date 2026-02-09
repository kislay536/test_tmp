// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTILE_H_
#define VERILATED_VTILE_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtile__Syms;
class Vtile___024root;
class Vtile___024unit;
class Vtile_dynamic_node_top_wrap;
class Vtile_l2_priority_encoder_6;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtile VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtile__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&clk_en,0,0);
    VL_IN8(&default_coreid_x,7,0);
    VL_IN8(&default_coreid_y,7,0);
    VL_IN8(&flat_tileid,7,0);
    VL_IN8(&jtag_tiles_ucb_val,0,0);
    VL_IN8(&jtag_tiles_ucb_data,3,0);
    VL_OUT8(&tile_jtag_ucb_val,0,0);
    VL_OUT8(&tile_jtag_ucb_data,3,0);
    VL_IN8(&dyn0_validIn_N,0,0);
    VL_IN8(&dyn0_validIn_E,0,0);
    VL_IN8(&dyn0_validIn_W,0,0);
    VL_IN8(&dyn0_validIn_S,0,0);
    VL_IN8(&dyn0_dNo_yummy,0,0);
    VL_IN8(&dyn0_dEo_yummy,0,0);
    VL_IN8(&dyn0_dWo_yummy,0,0);
    VL_IN8(&dyn0_dSo_yummy,0,0);
    VL_IN8(&dyn1_validIn_N,0,0);
    VL_IN8(&dyn1_validIn_E,0,0);
    VL_IN8(&dyn1_validIn_W,0,0);
    VL_IN8(&dyn1_validIn_S,0,0);
    VL_IN8(&dyn1_dNo_yummy,0,0);
    VL_IN8(&dyn1_dEo_yummy,0,0);
    VL_IN8(&dyn1_dWo_yummy,0,0);
    VL_IN8(&dyn1_dSo_yummy,0,0);
    VL_IN8(&dyn2_validIn_N,0,0);
    VL_IN8(&dyn2_validIn_E,0,0);
    VL_IN8(&dyn2_validIn_W,0,0);
    VL_IN8(&dyn2_validIn_S,0,0);
    VL_IN8(&dyn2_dNo_yummy,0,0);
    VL_IN8(&dyn2_dEo_yummy,0,0);
    VL_IN8(&dyn2_dWo_yummy,0,0);
    VL_IN8(&dyn2_dSo_yummy,0,0);
    VL_OUT8(&dyn0_dNo_valid,0,0);
    VL_OUT8(&dyn0_dEo_valid,0,0);
    VL_OUT8(&dyn0_dWo_valid,0,0);
    VL_OUT8(&dyn0_dSo_valid,0,0);
    VL_OUT8(&dyn0_yummyOut_N,0,0);
    VL_OUT8(&dyn0_yummyOut_E,0,0);
    VL_OUT8(&dyn0_yummyOut_W,0,0);
    VL_OUT8(&dyn0_yummyOut_S,0,0);
    VL_OUT8(&dyn1_dNo_valid,0,0);
    VL_OUT8(&dyn1_dEo_valid,0,0);
    VL_OUT8(&dyn1_dWo_valid,0,0);
    VL_OUT8(&dyn1_dSo_valid,0,0);
    VL_OUT8(&dyn1_yummyOut_N,0,0);
    VL_OUT8(&dyn1_yummyOut_E,0,0);
    VL_OUT8(&dyn1_yummyOut_W,0,0);
    VL_OUT8(&dyn1_yummyOut_S,0,0);
    VL_OUT8(&dyn2_dNo_valid,0,0);
    VL_OUT8(&dyn2_dEo_valid,0,0);
    VL_OUT8(&dyn2_dWo_valid,0,0);
    VL_OUT8(&dyn2_dSo_valid,0,0);
    VL_OUT8(&dyn2_yummyOut_N,0,0);
    VL_OUT8(&dyn2_yummyOut_E,0,0);
    VL_OUT8(&dyn2_yummyOut_W,0,0);
    VL_OUT8(&dyn2_yummyOut_S,0,0);
    VL_IN8(&debug_req_i,0,0);
    VL_OUT8(&unavailable_o,0,0);
    VL_IN8(&timer_irq_i,0,0);
    VL_IN8(&ipi_i,0,0);
    VL_IN8(&irq_i,1,0);
    VL_IN16(&default_chipid,13,0);
    VL_IN(&default_total_num_tiles,31,0);
    VL_IN64(&dyn0_dataIn_N,63,0);
    VL_IN64(&dyn0_dataIn_E,63,0);
    VL_IN64(&dyn0_dataIn_W,63,0);
    VL_IN64(&dyn0_dataIn_S,63,0);
    VL_IN64(&dyn1_dataIn_N,63,0);
    VL_IN64(&dyn1_dataIn_E,63,0);
    VL_IN64(&dyn1_dataIn_W,63,0);
    VL_IN64(&dyn1_dataIn_S,63,0);
    VL_IN64(&dyn2_dataIn_N,63,0);
    VL_IN64(&dyn2_dataIn_E,63,0);
    VL_IN64(&dyn2_dataIn_W,63,0);
    VL_IN64(&dyn2_dataIn_S,63,0);
    VL_OUT64(&dyn0_dNo,63,0);
    VL_OUT64(&dyn0_dEo,63,0);
    VL_OUT64(&dyn0_dWo,63,0);
    VL_OUT64(&dyn0_dSo,63,0);
    VL_OUT64(&dyn1_dNo,63,0);
    VL_OUT64(&dyn1_dEo,63,0);
    VL_OUT64(&dyn1_dWo,63,0);
    VL_OUT64(&dyn1_dSo,63,0);
    VL_OUT64(&dyn2_dNo,63,0);
    VL_OUT64(&dyn2_dEo,63,0);
    VL_OUT64(&dyn2_dWo,63,0);
    VL_OUT64(&dyn2_dSo,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtile___024unit* const __PVT____024unit;
    Vtile_dynamic_node_top_wrap* const __PVT__tile__DOT__user_dynamic_network0;
    Vtile_dynamic_node_top_wrap* const __PVT__tile__DOT__user_dynamic_network1;
    Vtile_dynamic_node_top_wrap* const __PVT__tile__DOT__user_dynamic_network2;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_high_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_high_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_high_8__DOT__encoder_low_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_high_7__DOT__encoder_low_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_high_6;
    Vtile_l2_priority_encoder_6* const __PVT__tile__DOT__l2__DOT__pipe1__DOT__ctrl__DOT__priority_encoder_10bits__DOT__encoder_low_9__DOT__encoder_low_8__DOT__encoder_low_7__DOT__encoder_low_6;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtile___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtile(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtile(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtile();
  private:
    VL_UNCOPYABLE(Vtile);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard

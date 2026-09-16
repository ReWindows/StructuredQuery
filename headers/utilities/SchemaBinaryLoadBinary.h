#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
namespace SearchIndexerDiagnosticTelemetry {
class SchemaBinaryLoadBinary {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SchemaBinaryLoadBinary@SearchIndexerDiagnosticTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SchemaBinaryLoadBinary@SearchIndexerDiagnosticTelemetry@@QEAA@XZ
    ~SchemaBinaryLoadBinary();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SchemaBinaryLoadBinary@SearchIndexerDiagnosticTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SchemaBinaryLoadBinary@SearchIndexerDiagnosticTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SearchIndexerDiagnosticTelemetry

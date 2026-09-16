#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
namespace SearchIndexerDiagnosticTelemetry {
class QueryParserLoadFromPropertySystem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@QueryParserLoadFromPropertySystem@SearchIndexerDiagnosticTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryParserLoadFromPropertySystem@SearchIndexerDiagnosticTelemetry@@QEAA@XZ
    ~QueryParserLoadFromPropertySystem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@QueryParserLoadFromPropertySystem@SearchIndexerDiagnosticTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@QueryParserLoadFromPropertySystem@SearchIndexerDiagnosticTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SearchIndexerDiagnosticTelemetry

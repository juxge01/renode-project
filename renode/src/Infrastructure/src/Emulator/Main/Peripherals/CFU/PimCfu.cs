// PimCfu.cs

using Antmicro.Renode.Peripherals.CPU;
using Antmicro.Renode.Logging;

namespace Antmicro.Renode.Peripherals.CFU
{
    public class PimCfu : ICFU
    {
        public ICPU ConnectedCpu { get; set; }
        public string SimulationFilePath { get; set; }

        private uint macOutValue;

        public PimCfu()
        {
            macOutValue = 0;
        }

        public uint GetMacOutValue()
        {
            if (ConnectedCpu == null)
            {
                throw new InvalidOperationException("[PimCfu] ConnectedCpu is not set.");
            }
            ConnectedCpu.Log(LogLevel.Info, $"[PimCfu] GetMacOutValue called. Current value: {macOutValue}");
            return macOutValue;
        }

        public void SetMacOutValue(uint value)
        {
            if (ConnectedCpu == null)
            {
                throw new InvalidOperationException("[PimCfu] ConnectedCpu is not set.");
            }
            macOutValue = value;
            ConnectedCpu.Log(LogLevel.Info, $"[PimCfu] SetMacOutValue called. Setting value: {macOutValue}");
        }

        public void Reset()
        {
            macOutValue = 0;
            ConnectedCpu.Log(LogLevel.Info, "[PimCfu] Reset called.");
        }
    }
}



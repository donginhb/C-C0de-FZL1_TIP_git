namespace OPCTrendLib
{
    using System;

    internal class BooleanOrExecutor : Executor
    {
        public override ExecuteAction Execute(IExecutorContext context)
        {
            if (base.CurrentIndex == 0)
            {
                if ((bool) base.SubVisitors[0].Result.Value)
                {
                    base.EndVisit(new Result(true));
                    return ExecuteAction.End;
                }
                return base.Execute(context);
            }
            return base.Execute(context);
        }
    }
}

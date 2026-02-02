package globalambc.control;

simple GlobalAmBCDRLModule
{
    parameters:
        bool enabled = default(false);
        double controlInterval @unit(s) = default(1s);

    gates:
        input in;
}

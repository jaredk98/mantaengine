#include <manta/thread.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Thread::sleep( u32 milliseconds )
{
}


ThreadID Thread::id()
{
	return ThreadID { };
}


void *Thread::create( ThreadFunction function )
{
	return nullptr;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Mutex::init()
{
}


void Mutex::free()
{
}


void Mutex::lock()
{
}


void Mutex::unlock()
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Condition::init()
{
}


void Condition::free()
{
}


void Condition::sleep( Mutex &mutex )
{
}


void Condition::wake()
{
}


void Condition::wake_all()
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
package co.touchlab.droidconandroid;

import com.birbit.android.jobqueue.JobManager;
import com.birbit.android.jobqueue.scheduling.FrameworkJobSchedulerService;

import android.support.annotation.NonNull;

import co.touchlab.droidconandroid.DroidconApplication;

public class JobQueueService extends FrameworkJobSchedulerService
{
    @NonNull
    @Override
    protected JobManager getJobManager()
    {
        return DroidconApplication.getInstance().getJobManager();
    }
}
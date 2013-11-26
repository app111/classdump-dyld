/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_semaphore;
@class NSCalendar, NSObject;

@interface TSCECalendar : NSObject {

	NSCalendar* mCalendar;
	NSObject<OS_dispatch_semaphore>* mSem;

}
-(void)dealloc;
-(id)init;
-(void)setTimeZone:(id)arg1 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned)arg3 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(id)initWithCalendarIdentifier:(id)arg1 ;
@end

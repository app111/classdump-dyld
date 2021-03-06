/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol EKDayViewControllerDelegate <NSObject>
@optional
-(void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;
-(void)dayViewControllerDidReloadData:(id)arg1;
-(void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1;
-(void)dayViewControllerDidTapEmptySpace:(id)arg1;
-(id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(BOOL)arg3;
-(BOOL)dayViewControllerShouldAllowLongPress:(id)arg1;
-(void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2;
-(BOOL)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 didScrollToDate:(id)arg2 normalizedOffset:(float)arg3;
-(void)dayViewController:(id)arg1 didStartDeceleratingTargettingDate:(id)arg2;
-(void)dayViewControllerDidBeginScrolling:(id)arg1;
-(void)dayViewControllerDidEndScrolling:(id)arg1;
-(BOOL)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;

@required
-(void)dayViewController:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;
@end


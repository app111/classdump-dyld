/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/PFUbiquityBaselineOperation.h>

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation

@property (assign) NSObject<PFUbiquityBaselineRollOperationDelegate> * delegate; 
-(id)retainedDelegate;
-(BOOL)haveConsistentStateForBaselineRoll;
-(BOOL)rollBaselineWithError:(id*)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)delegate;
-(void)main;
@end

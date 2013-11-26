/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSNumber, NSSet;

@interface PLAggregateState : NSObject {

	NSNumber* energy;
	NSNumber* time;
	NSNumber* count;
	NSSet* substateIndices;

}

@property (nonatomic,copy) NSNumber * energy; 
@property (nonatomic,copy) NSNumber * time; 
@property (nonatomic,copy) NSNumber * count; 
@property (nonatomic,retain) NSSet * substateIndices; 
-(double)avgPower;
-(void)setTime:(id)arg1 energy:(id)arg2 ;
-(void)resetStats;
-(void)incrementCount;
-(id)substateIndices;
-(double)avgLength;
-(void)updateCompositeStateWithBaseStates:(id)arg1 ;
-(void)setSubstateIndices:(id)arg1 ;
-(id)initWithTime:(id)arg1 energy:(id)arg2 substateIndices:(id)arg3 ;
-(void)dealloc;
-(id)count;
-(id)init;
-(void)setCount:(id)arg1 ;
-(void)setTime:(id)arg1 ;
-(id)time;
-(id)energy;
-(void)setEnergy:(id)arg1 ;
@end

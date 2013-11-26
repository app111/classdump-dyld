/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class APSEnvironment, NSMutableDictionary, NSSet, NSDictionary, NSString;

@interface APSTopicGroup : NSObject {

	APSEnvironment* _environment;
	NSMutableDictionary* _hashesToEnabledTopics;
	NSMutableDictionary* _hashesToIgnoredTopics;
	NSMutableDictionary* _hashesToOpportunisticTopics;
	int _category;

}

@property (nonatomic,readonly) NSSet * enabledTopics; 
@property (nonatomic,readonly) NSSet * ignoredTopics; 
@property (nonatomic,readonly) NSSet * opportunisticTopics; 
@property (nonatomic,readonly) NSDictionary * hashesToEnabledTopics; 
@property (nonatomic,readonly) NSDictionary * hashesToIgnoredTopics; 
@property (nonatomic,readonly) NSDictionary * hashesToOpportunisticTopics; 
@property (nonatomic,readonly) NSString * logString; 
+(void)populateHashDictionary:(id)arg1 withSet:(id)arg2 ;
-(id)enabledTopics;
-(id)opportunisticTopics;
-(id)ignoredTopics;
-(id)logString;
-(void)_logChangesFor:(id)arg1 oldTopics:(id)arg2 newTopics:(id)arg3 ;
-(id)initWithEnvironment:(id)arg1 category:(int)arg2 ;
-(int)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 pretend:(BOOL)arg4 ;
-(id)hashesToEnabledTopics;
-(id)hashesToIgnoredTopics;
-(id)hashesToOpportunisticTopics;
-(void)dealloc;
@end

/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ADEventListenerPlugin/ADEventListenerPlugin-Structs.h>
@class NSDictionary, NSNumber;

@interface PLBatteryProperties : NSObject {

	unsigned batteryEntry;
	NSDictionary* batteryProperties;

}

@property (nonatomic,readonly) BOOL gasGaugeEnabled; 
@property (nonatomic,readonly) double maxCapacity; 
@property (nonatomic,readonly) double currentCapacity; 
@property (nonatomic,readonly) double rawCurrentCapacity; 
@property (nonatomic,readonly) double capacity; 
@property (nonatomic,readonly) double rawCapacity; 
@property (nonatomic,readonly) int voltage; 
@property (nonatomic,readonly) BOOL isCharging; 
@property (nonatomic,readonly) BOOL isPluggedIn; 
@property (nonatomic,readonly) BOOL isCritical; 
@property (nonatomic,readonly) int chargingCurrent; 
@property (nonatomic,readonly) int batteryTemp; 
@property (nonatomic,readonly) int cycleCount; 
@property (nonatomic,readonly) int designCapacity; 
@property (nonatomic,readonly) int current; 
@property (nonatomic,readonly) BOOL fullyCharged; 
@property (nonatomic,readonly) BOOL draining; 
@property (nonatomic,readonly) long updateTime; 
@property (nonatomic,readonly) NSNumber * adapterInfo; 
@property (nonatomic,readonly) NSNumber * connectedStatus; 
+(id)properties;
-(id)humanReadableChargingState;
-(id)initWithBatteryEntry:(unsigned)arg1 ;
-(id)batteryProperties;
-(id)propertyForKey:(CFStringRef)arg1 ;
-(void)dealloc;
-(id)init;
-(double)maxCapacity;
-(void)invalidateCache;
-(BOOL)isPluggedIn;
-(BOOL)gasGaugeEnabled;
-(int)cycleCount;
-(int)designCapacity;
-(id)connectedStatus;
-(double)currentCapacity;
-(BOOL)isCharging;
-(int)voltage;
-(double)rawCurrentCapacity;
-(double)rawMaxCapacity;
-(BOOL)fullyCharged;
-(id)adapterInfo;
-(double)rawCapacity;
-(BOOL)isCritical;
-(int)chargingCurrent;
-(int)batteryTemp;
-(BOOL)draining;
-(int)current;
-(double)capacity;
-(long)updateTime;
@end

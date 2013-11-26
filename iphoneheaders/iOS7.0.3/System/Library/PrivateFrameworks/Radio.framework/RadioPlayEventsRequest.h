/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Radio/RadioRequest.h>

@class NSArray, SSURLConnectionRequest, NSString;

@interface RadioPlayEventsRequest : RadioRequest {

	NSArray* _playEvents;
	long long _playedTrackStoreID;
	SSURLConnectionRequest* _request;
	NSArray* _skippedTrackStoreIDs;
	long long _stationID;
	NSString* _stationHash;
	NSString* _deviceName;

}

@property (nonatomic,copy) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithStationHash:(id)arg1 stationID:(long long)arg2 playEvents:(id)arg3 ;
-(void)setDeviceName:(id)arg1 ;
-(id)init;
-(id)deviceName;
-(id)initWithStation:(id)arg1 playEvents:(id)arg2 ;
-(id)initWithPlayedTrack:(id)arg1 skippedTracks:(id)arg2 station:(id)arg3 ;
-(void).cxx_destruct;
@end

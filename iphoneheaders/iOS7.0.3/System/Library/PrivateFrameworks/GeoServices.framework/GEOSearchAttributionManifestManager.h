/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOSearchAttributionServerProxy;
@interface GEOSearchAttributionManifestManager : NSObject {

	<GEOSearchAttributionServerProxy>* _serverProxy;

}

@property (nonatomic,readonly) <GEOSearchAttributionServerProxy> * serverProxy;              //@synthesize serverProxy=_serverProxy - In the implementation block
+(void)useRemoteProxy;
+(void)useLocalProxy;
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned)arg2 completionHandler:(/*^block*/ id)arg3 errorHandler:(/*^block*/ id)arg4 ;
-(id)serverProxy;
@end


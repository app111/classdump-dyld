/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOETAProvider.h>
#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester;

@interface GEOVoltaireETAProvider : GEOETAProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/ id _errorHandler;
	/*^block*/ id _finishedHandler;
	/*^block*/ id _willSendRequestHandler;
	/*^block*/ id _simpleETARequestFinishedHandler;
	BOOL _cancelled;

}
+(void)_resetURL;
+(void)setUsePersistentConnection:(BOOL)arg1 ;
+(unsigned short)providerID;
-(void)dealloc;
-(id)init;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requesterWillSendRequestForEstablishedConnection:(id)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(void)cancelRequest;
-(void)startRequest:(id)arg1 connectionProperties:(const SCD_Struct_GE79*)arg2 willSendRequest:(/*^block*/ id)arg3 finished:(/*^block*/ id)arg4 error:(/*^block*/ id)arg5 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(void)startSimpleETARequest:(id)arg1 finished:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
@end

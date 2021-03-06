/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKService.h>
#import <GameCenterFoundation/GKAccountService.h>
#import <GameCenterFoundation/GKAccountServicePrivate.h>

@protocol OS_dispatch_queue;
@class GKService, NSObject, NSDictionary;

@interface GKAuthenticationWrapperService : GKService <GKAccountService, GKAccountServicePrivate> {

	GKService* _service;
	NSObject<OS_dispatch_queue>* _authQueue;
	NSDictionary* _signatureLookup;

}
+(id)serviceForClient:(id)arg1 ;
+(id)serviceForBundleID:(id)arg1 ;
+(id)authenticationWrapperForService:(id)arg1 queue:(id)arg2 ;
-(void)_buildSignatureLookupForProtocol:(id)arg1 ;
-(id)initWithService:(id)arg1 queue:(id)arg2 ;
-(void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 usingFastPath:(BOOL)arg4 handler:(/*^block*/ id)arg5 ;
-(oneway void)generateIdentityVerificationSignatureWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 usingFastPath:(BOOL)arg3 handler:(/*^block*/ id)arg4 ;
-(oneway void)authenticationCancelled;
-(oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(/*^block*/ id)arg5 ;
-(oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(BOOL)arg5 handler:(/*^block*/ id)arg6 ;
-(oneway void)setupAccountForParameters:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)signOutPlayerWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)validateAccountWithPassword:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithClient:(id)arg1 ;
@end


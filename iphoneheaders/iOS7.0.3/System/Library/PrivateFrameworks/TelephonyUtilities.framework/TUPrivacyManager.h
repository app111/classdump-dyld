/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface TUPrivacyManager : NSObject
+(id)sharedPrivacyManager;
-(void)dealloc;
-(id)init;
-(void)addRule:(id)arg1 ;
-(void)_handleBlockListChanged:(id)arg1 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forPhoneNumber:(id)arg2 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1 ;
-(BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)arg1 ;
-(id)allBlacklistRules;
-(void)removeRule:(id)arg1 ;
@end

/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface MCManagedDefaultsManager : NSObject
+(id)sharedManager;
-(id)managedDefaultsPathForDomain:(id)arg1 ;
-(id)managedDefaultsForDomain:(id)arg1 ;
-(void)setDefaults:(id)arg1 forManagedDomain:(id)arg2 ;
-(BOOL)domainHasManagedDefaults:(id)arg1 ;
-(void)addDefaults:(id)arg1 toManagedDomain:(id)arg2 ;
-(void)removeDefaults:(id)arg1 fromManagedDomain:(id)arg2 ;
-(void)removeAllManagedDefaultsFromDomain:(id)arg1 ;
-(void)sendManagedDefaultsChangedNotificationForDomains:(id)arg1 ;
@end

/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol BKApplicationDelegate <NSObject>
@required
-(void)applicationDidActivate:(id)arg1 withInfo:(id)arg2;
-(void)applicationDidExit:(id)arg1 withInfo:(id)arg2;
-(void)applicationDidSuspend:(id)arg1 withSettings:(id)arg2;
-(void)applicationSuspendSettingsDidChange:(id)arg1 withSettings:(id)arg2;
-(void)applicationDidFinishBackgroundContentFetching:(id)arg1 withInfo:(id)arg2;
-(BOOL)applicationIsWorkspaceSuspended:(id)arg1;
-(void)applicationDidReceiveForceQuit:(id)arg1;
@end

{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":".DS_Store","path":".DS_Store","contentType":"file"},{"name":".gitignore","path":".gitignore","contentType":"file"},{"name":"0-binary_tree_node.c","path":"0-binary_tree_node.c","contentType":"file"},{"name":"1-binary_tree_insert_left.c","path":"1-binary_tree_insert_left.c","contentType":"file"},{"name":"10-binary_tree_depth.c","path":"10-binary_tree_depth.c","contentType":"file"},{"name":"11-binary_tree_size.c","path":"11-binary_tree_size.c","contentType":"file"},{"name":"12-binary_tree_leaves.c","path":"12-binary_tree_leaves.c","contentType":"file"},{"name":"13-binary_tree_nodes.c","path":"13-binary_tree_nodes.c","contentType":"file"},{"name":"14-binary_tree_balance.c","path":"14-binary_tree_balance.c","contentType":"file"},{"name":"15-binary_tree_is_full.c","path":"15-binary_tree_is_full.c","contentType":"file"},{"name":"16-binary_tree_is_perfect.c","path":"16-binary_tree_is_perfect.c","contentType":"file"},{"name":"17-binary_tree_sibling.c","path":"17-binary_tree_sibling.c","contentType":"file"},{"name":"18-binary_tree_uncle.c","path":"18-binary_tree_uncle.c","contentType":"file"},{"name":"2-binary_tree_insert_right.c","path":"2-binary_tree_insert_right.c","contentType":"file"},{"name":"3-binary_tree_delete.c","path":"3-binary_tree_delete.c","contentType":"file"},{"name":"4-binary_tree_is_leaf.c","path":"4-binary_tree_is_leaf.c","contentType":"file"},{"name":"5-binary_tree_is_root.c","path":"5-binary_tree_is_root.c","contentType":"file"},{"name":"6-binary_tree_preorder.c","path":"6-binary_tree_preorder.c","contentType":"file"},{"name":"7-binary_tree_inorder.c","path":"7-binary_tree_inorder.c","contentType":"file"},{"name":"8-binary_tree_postorder.c","path":"8-binary_tree_postorder.c","contentType":"file"},{"name":"9-binary_tree_height.c","path":"9-binary_tree_height.c","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"},{"name":"binary_trees.h","path":"binary_trees.h","contentType":"file"}],"totalCount":23}},"fileTreeProcessingTime":3.086761,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":685719348,"defaultBranch":"master","name":"binary_trees","ownerLogin":"YoTi1412","currentUserCanPush":false,"isFork":true,"isEmpty":false,"createdAt":"2023-08-31T21:15:52.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/71252194?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1693516554.647715","canEdit":false,"refType":"branch","currentOid":"8279ca26678843033108711e8ed66497ff93f5fb"},"path":"4-binary_tree_is_leaf.c","currentUser":null,"blob":{"rawLines":["#include \"binary_trees.h\"","","/**"," * binary_tree_is_leaf - creates a binary tree node."," *"," * @node: pointer to the parent node of the node to create."," *"," * Return: pointer to the new node, or NULL on failure."," */","","int binary_tree_is_leaf(const binary_tree_t *node)","{","\tif (!node)","\t\treturn (0);","","\tif (!node->left && !node->right)","\t\treturn (1);","","\treturn (0);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":25,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":52,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":59,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":55,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":23,"cssClass":"pl-en"},{"start":24,"end":29,"cssClass":"pl-k"},{"start":30,"end":43,"cssClass":"pl-smi"},{"start":44,"end":45,"cssClass":"pl-c1"},{"start":45,"end":49,"cssClass":"pl-s1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":6,"end":10,"cssClass":"pl-s1"}],[{"start":2,"end":8,"cssClass":"pl-k"},{"start":10,"end":11,"cssClass":"pl-c1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":6,"end":10,"cssClass":"pl-s1"},{"start":10,"end":12,"cssClass":"pl-c1"},{"start":12,"end":16,"cssClass":"pl-c1"},{"start":17,"end":19,"cssClass":"pl-c1"},{"start":21,"end":25,"cssClass":"pl-s1"},{"start":25,"end":27,"cssClass":"pl-c1"},{"start":27,"end":32,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-k"},{"start":10,"end":11,"cssClass":"pl-c1"}],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":10,"cssClass":"pl-c1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/YoTi1412/binary_trees/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/YoTi1412/binary_trees/security/dependabot","repoSecurityAndAnalysisPath":"/YoTi1412/binary_trees/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"4-binary_tree_is_leaf.c","displayUrl":"https://github.com/YoTi1412/binary_trees/blob/master/4-binary_tree_is_leaf.c?raw=true","headerInfo":{"blobSize":"355 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"892a67b","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FYoTi1412%2Fbinary_trees%2Fblob%2Fmaster%2F4-binary_tree_is_leaf.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"20","truncatedSloc":"16"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/YoTi1412/binary_trees/discussions/new","newIssuePath":"/YoTi1412/binary_trees/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/YoTi1412/binary_trees/blob/master/4-binary_tree_is_leaf.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/YoTi1412/binary_trees/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/YoTi1412/binary_trees/raw/master/4-binary_tree_is_leaf.c","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"YoTi1412","repoName":"binary_trees","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"binary_tree_is_leaf","kind":"function","identStart":215,"identEnd":234,"extentStart":215,"extentEnd":261,"fullyQualifiedName":"binary_tree_is_leaf","identUtf16":{"start":{"lineNumber":10,"utf16Col":4},"end":{"lineNumber":10,"utf16Col":23}},"extentUtf16":{"start":{"lineNumber":10,"utf16Col":4},"end":{"lineNumber":10,"utf16Col":50}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/YoTi1412/binary_trees/branches":{"post":"AwQBo2WAI352853Eax__oHxmM95PLGCr0JyKZPiH3V8d-BNqEYVTLy3Uho0zBuxm5HanqJfTDIF1g41jg_eghw"},"/repos/preferences":{"post":"vL1hGqhzeZlQWB9kDL-wjw1QmpcUaZGq1eSYg2M3OLs1TsFj4fnRF5QMlQJGqSW4F2VDOLip_kw1B2tfRRT8RA"}}},"title":"binary_trees/4-binary_tree_is_leaf.c at master · YoTi1412/binary_trees"}
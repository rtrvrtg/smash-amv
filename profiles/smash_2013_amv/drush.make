; SMASH! 2013 AMV make file
core = "7.x"
api = "2"
; comment this out in to use on drupal.org
projects[drupal][version] = "7.x"

; Modules
projects[AmazonS3][version] = "1.x-dev"
projects[AmazonS3][subdir] = "contrib"

projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc3"
projects[profiler_builder][subdir] = "contrib"

projects[ds][version] = "2.2"
projects[ds][subdir] = "contrib"

projects[awssdk][version] = "5.4"
projects[awssdk][subdir] = "contrib"

projects[media][version] = "1.3"
projects[media][subdir] = "contrib"

projects[amazons3_cors][version] = "1.x-dev"
projects[amazons3_cors][subdir] = "contrib"

projects[entity][version] = "1.0"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

projects[mediaelement][version] = "1.2"
projects[mediaelement][subdir] = "contrib"

projects[rules][version] = "2.2"
projects[rules][subdir] = "contrib"

projects[jquery_update][version] = "2.3"
projects[jquery_update][subdir] = "contrib"

projects[views][version] = "3.5"
projects[views][subdir] = "contrib"

projects[fivestar][version] = "2.0-alpha2"
projects[fivestar][subdir] = "contrib"

projects[votingapi][version] = "2.11"
projects[votingapi][subdir] = "contrib"


; Themes
; zen
projects[zen][type] = "theme"
projects[zen][version] = "5.1"
projects[zen][subdir] = "contrib"

; Libraries
libraries[awssdk][directory_name] = "awssdk"
libraries[awssdk][type] = "library"
libraries[awssdk][destination] = "libraries"
libraries[awssdk][download][type] = "git"
libraries[awssdk][download][url] = "https://github.com/amazonwebservices/aws-sdk-for-php.git"


; smash_2013_amv make file for d.o. usage
core = "7.22"
api = "2"

projects[drupal][version] = "7.22"

; +++++ Modules +++++

projects[ctools][version] = "1.3"
projects[ctools][subdir] = "contrib"

projects[profiler_builder][version] = "1.0-rc4"
projects[profiler_builder][subdir] = "contrib"

projects[ds][version] = "2.2"
projects[ds][subdir] = "contrib"

projects[features][version] = "2.0-beta2"
projects[features][subdir] = "contrib"

projects[uuid_features][version] = "1.0-alpha3"
projects[uuid_features][subdir] = "contrib"

projects[custom_formatters][version] = "2.2"
projects[custom_formatters][subdir] = "contrib"

projects[link][version] = "1.1"
projects[link][subdir] = "contrib"

projects[media][version] = "1.3"
projects[media][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[entity][version] = "1.0"
projects[entity][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"

projects[mediaelement][version] = "1.2"
projects[mediaelement][subdir] = "contrib"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[rules][version] = "2.3"
projects[rules][subdir] = "contrib"

projects[uuid][version] = "1.0-alpha3"
projects[uuid][subdir] = "contrib"

projects[jquery_update][version] = "2.3"
projects[jquery_update][subdir] = "contrib"

projects[views][version] = "3.6"
projects[views][subdir] = "contrib"

projects[fivestar][version] = "2.0-alpha2"
projects[fivestar][subdir] = "contrib"

projects[votingapi][version] = "2.11"
projects[votingapi][subdir] = "contrib"

; +++++ Themes +++++

; zen
projects[zen][type] = "theme"
projects[zen][version] = "5.1"
projects[zen][subdir] = "contrib"

; +++++ Libraries +++++

; Profiler
libraries[profiler][directory_name] = "profiler"
libraries[profiler][type] = "library"
libraries[profiler][destination] = "libraries"
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.x-dev.tar.gz"

libraries[mediaelement][directory_name] = "mediaelement"
libraries[mediaelement][type] = "library"
libraries[mediaelement][destination] = "libraries"
libraries[mediaelement][download][type] = "git"
libraries[mediaelement][download][url] = "https://github.com/johndyer/mediaelement.git"

